import cv2
from ultralytics import YOLO

model = YOLO('yolov8n-seg.pt')

#open the video file
video_path = "path/to/your/video.mp4"  # Replace with your video file path
cap = cv2.VideoCapture(0)  # Use 0 for webcam, or replace with video_path for a video file

#Loop through the video frames
while cap.isOpened():
    #read a frame from the video
    sucess, frame = cap.read()

    if sucess:
        #run the YOLO model on the frame
        results = model(frame)
        
        #visualize the results on the frame
        annotated_frame = results[0].plot()

        #display the annotated frame
        cv2.imshow("YOLOv8 Inference", annotated_frame)

        #break the loop if 'q' is pressed
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        #break the loop if the end of the video is reached
        break

#release the video capture object and close all display windows
cap.release()
cv2.destroyAllWindows()
